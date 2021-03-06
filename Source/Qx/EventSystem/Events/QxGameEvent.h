#pragma once
#include "QxNotifyEvent.h"
#include "Utility/KxDynamicString.h"

class QxGameEvent: public QxNotifyEvent
{
	public:
		QxEVENT_MEMBER_DEFINE(QxGameEvent, PluginsLoaded);
		QxEVENT_MEMBER_DEFINE(QxGameEvent, InputLoaded);
		QxEVENT_MEMBER_DEFINE(QxGameEvent, DataLoaded);

		QxEVENT_MEMBER_DEFINE(QxGameEvent, NewGame);
		QxEVENT_MEMBER_DEFINE(QxGameEvent, GameSave);
		QxEVENT_MEMBER_DEFINE(QxGameEvent, GameSaved);
		QxEVENT_MEMBER_DEFINE(QxGameEvent, GameLoad);
		QxEVENT_MEMBER_DEFINE(QxGameEvent, GameLoaded);
		QxEVENT_MEMBER_DEFINE(QxGameEvent, DeleteSavedGame);

	private:
		const void* m_Data = nullptr;
		size_t m_Length = 0;

	public:
		QxGameEvent() = default;
		QxGameEvent(const void* data, size_t length)
			:m_Data(data), m_Length(length)
		{
		}

	public:
		KxDynamicStringA GetSaveFile() const
		{
			const QxEventID id = GetEventID();
			if (id == EvtGameSave || id == EvtGameLoad || id == EvtDeleteSavedGame)
			{
				return KxDynamicStringA(reinterpret_cast<const char*>(m_Data), m_Length);
			}
			return {};
		}
		bool IsGameLoadedSuccessfully() const
		{
			if (GetEventID() == EvtGameLoaded)
			{
				return m_Data != nullptr;
			}
			return false;
		}
};
