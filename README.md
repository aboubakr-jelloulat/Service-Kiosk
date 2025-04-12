
# Quesok Service with Queue 🚀

This project implements a queue-based system for managing tickets in a service, where each ticket has a unique number, waiting clients, and expected serve time. The service allows issuing tickets, serving clients, and displaying ticket information in different formats. 🎫

## Features ✨

- **Ticket Issuance**: Generates tickets with a unique number and associated service details. 🏷️
- **Queue Management**: Displays the queue of waiting clients and their respective ticket numbers. ⏳
- **Serve Clients**: Allows serving the next client in the queue. 👥
- **Dynamic Ticket Information**: Shows details like the number of waiting clients and expected service times. ⏰
- **Print Tickets in Multiple Orders**: Tickets can be printed in Left to Right (LTR) or Right to Left (RTL) order. 🔄
  
## Class Overview 🏫

### `clsQueueLine` 📋

This is the main class that manages the ticket queue and offers various functions for issuing tickets and serving clients. The class uses the standard `queue` container to hold tickets.

#### Public Methods 🛠️

- **IssueTicket**: Generates a new ticket and adds it to the queue. 🎟️
- **WaitingClients**: Returns the number of clients waiting in the queue. 🧑‍🤝‍🧑
- **WhoIsNext**: Returns the number of the client who is next in the queue. 🏃‍♀️
- **ServeNextClient**: Serves the next client in the queue, removing them from the queue. ✅
- **ServedClients**: Returns the number of clients who have already been served. 🏅
- **PrintInfo**: Displays general queue information. 📊
- **PrintTicketsLineRTL**: Prints the ticket queue from right to left. ➡️⬅️
- **PrintTicketsLineLTR**: Prints the ticket queue from left to right. ⬅️➡️
- **PrintAllTickets**: Prints all tickets currently in the queue with detailed information. 📜

#### Internal Classes ⚙️

- **`_clsTicket`**: This class represents an individual ticket in the queue. Each ticket has:
  - A unique number 🔢
  - A timestamp for when the ticket was issued ⏰
  - The number of waiting clients 🧑‍🤝‍🧑
  - The average service time per client 🕒

## Dependencies 📚

- `<iostream>`: For input and output operations. 💻
- `<queue>`: For managing the queue of tickets. 📥

## DSA Concepts Used 🧠

- **Queue**: The project uses a `queue` container to manage the tickets efficiently. 🚦
- **Stacks**: Used for printing tickets in Left to Right order. ⬆️
- **System Date**: To log the timestamp when each ticket is issued. 📅

## Usage 📌

1. Create an instance of `clsQueueLine` with a ticket prefix and average serve time.
2. Use `IssueTicket` to issue a new ticket.
3. Use `ServeNextClient` to serve the next client in the queue.
4. Print queue information and tickets using the provided methods.

## Example 📝

```cpp
clsQueueLine queue("A", 5);
queue.IssueTicket();
queue.IssueTicket();
queue.PrintAllTickets();
queue.ServeNextClient();
queue.PrintInfo();
```

## License 📄

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
