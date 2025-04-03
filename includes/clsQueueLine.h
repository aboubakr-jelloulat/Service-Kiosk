#pragma once
#include <iostream>
#include <string>
#include <queue>
using namespace std;

class clsQueueLine
{
private :

	string _GlobalPerfix;
	int		_GlobalTotalTicket;
	int		_GlobalServedClient;
	int		_GlobalWaitingClient;
	int		_GlobalWaitingTime;
	int		_Counter = 0;


	class _clsTicket
	{
		string	_TicketPerfix;
		string	_TimeAndDate;
		int		_WaitingClient;
		int 	_ServeTime;
	};


public :
	clsQueueLine(string Perfix, int WaitingTime)
	{
		_GlobalPerfix = Perfix;
		_GlobalWaitingTime = WaitingTime;
	}

	void IssueTicket()
	{
		_clsTicket	Ticket;

		Ticket._TicketPerfix = _GlobalPerfix + to_string(_Counter++);
		Ticket._TimeAndDate = 
	}


};