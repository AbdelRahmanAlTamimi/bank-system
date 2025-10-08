# BankSystem

A modern C++17 console application that simulates a simple bank back-office system. It lets bank staff manage clients and users, perform transactions, and handle currencies with plain-text file persistence.

## Table of Contents

- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Project Structure](#project-structure)
- [Data & Persistence](#data--persistence)
- [Troubleshooting](#troubleshooting)

## Features

- Client management: add, update, delete, list, and find clients
- User management: add, update, delete, list, find users; login and activity register
- Authentication: login screen and login register log
- Transactions: deposit, withdraw, transfer, and transfer logs
- Balances: total balances report
- Currencies: list currencies, find currency, update currency rates, currency calculator, exchange main screen
- Robust console UI screens with input validation utilities

## Installation

### Prerequisites

- A C++17-compatible compiler (clang++ or g++)
- macOS, Linux, or Windows (via MSYS2/WSL)

### Clone

```bash
git clone https://github.com/AbdelRahmanAlTamimi/BankSystem.git
cd BankSystem
```

### Build (macOS/Linux)

Using clang++ (recommended on macOS):

```bash
clang++ -std=c++17 -O2 -o main main.cpp
```

Using g++:

```bash
g++ -std=c++17 -O2 -o main main.cpp
```

### Build (Windows/MSYS2 or WSL)

```bash
g++ -std=c++17 -O2 -o main.exe main.cpp
```

> Note: The project is header-heavy. All implementation is contained in headers plus `main.cpp`, so a single translation unit build is sufficient.

## Usage

Run the compiled binary from the project root so it can read/write the data files next to it.

macOS/Linux:

```bash
./main
```

Windows:

```bash
main.exe
```

Follow the on-screen menus to:

- Log in as a user
- Manage clients and users
- Perform deposits, withdrawals, and transfers
- View balances and transfer logs
- Work with currencies (list, find, update rates, and convert)

If you are starting fresh with empty files, you may need to create an initial user via the users management screens after launching.

## Project Structure

Key files and what they represent:

- `main.cpp`: application entry point and navigation among screens
- `cls*.h`: console screen and domain classes (clients, users, currency, transactions, etc.)
- `Global.h`: shared globals and settings
- `InterfaceCommunication.h`: console I/O abstractions
- `*.txt` data files: plain-text storage for the app

## Data & Persistence

The app uses plain-text files in the project directory:

- `Clients.txt`: client records
- `Users.txt`: user accounts and permissions
- `Currencies.txt`: currency codes and rates
- `TransferLog.txt`: record of transfers
- `LoginRegister.txt`: login activity

Keep these files in the same directory as the executable. The program reads/writes them directly; do not relocate them unless you also run the executable from that location.

## Troubleshooting

- Build errors about C++ standard: ensure you pass `-std=c++17` (or newer).
- Runtime cannot find data files: run the executable from the project root so `*.txt` files are alongside it.
- Permission denied running `./main`: make it executable `chmod +x main`.
- Non-ASCII console rendering issues on Windows CMD: try Windows Terminal or PowerShell.
