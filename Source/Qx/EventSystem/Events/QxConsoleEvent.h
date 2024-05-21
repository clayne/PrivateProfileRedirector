#pragma once
#include "Qx/EventSystem/Event.h"

class QxConsoleEvent: public QxEvent
{
	public:
		QxEVENT_MEMBER_DEFINE(QxConsoleEvent, Command);

	private:
		kxf::String m_CommandName;
		kxf::String m_CommandAlias;
		kxf::String m_CommandHelp;

		double m_Result = 0;

	public:
		QxConsoleEvent() = default;

	public:
		kxf::String GetCommandName() const
		{
			return m_CommandName;
		}
		void SetCommandName(const kxf::String& name)
		{
			m_CommandName = name;
		}

		kxf::String GetCommandAlias() const
		{
			return m_CommandAlias;
		}
		void SetCommandAlias(const kxf::String& alias)
		{
			m_CommandAlias = alias;
		}
		
		kxf::String GetCommandHelp() const
		{
			return m_CommandName;
		}
		void SetCommandHelp(const kxf::String& help)
		{
			m_CommandHelp = help;
		}

		double GetResult() const
		{
			return m_Result;
		}
		double SetResult(double result)
		{
			m_Result = result;
		}
};
