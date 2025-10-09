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

Using Make (recommended):

```bash
make
```

Or manually using clang++:

```bash
clang++ -std=c++17 -O2 -I./include -o build/main src/main.cpp
```

Using g++:

```bash
g++ -std=c++17 -O2 -I./include -o build/main src/main.cpp
```

### Build (Windows/MSYS2 or WSL)

Using Make:

```bash
make
```

Or manually:

```bash
g++ -std=c++17 -O2 -I./include -o build/main.exe src/main.cpp
```

### Build with CMake

```bash
mkdir build && cd build
cmake ..
make
```

> Note: The project is header-heavy. All implementation is contained in headers plus `main.cpp`, so a single translation unit build is sufficient.

## Usage

Run the compiled binary using Make:

```bash
make run
```

Or run directly:

macOS/Linux:

```bash
./build/main
```

Windows:

```bash
build/main.exe
```

Follow the on-screen menus to:

- Log in as a user
- Manage clients and users
- Perform deposits, withdrawals, and transfers
- View balances and transfer logs
- Work with currencies (list, find, update rates, and convert)

If you are starting fresh with empty files, you may need to create an initial user via the users management screens after launching.

## Project Structure

```
BankSystem/
├── src/                    # Source files
│   └── main.cpp           # Application entry point
├── include/               # Header files
│   ├── models/           # Business logic models
│   │   ├── clsBankClient.h
│   │   ├── clsPerson.h
│   │   ├── clsUser.h
│   │   ├── clsCurrency.h
│   │   ├── clsDate.h
│   │   └── clsString.h
│   ├── screens/          # UI screen classes
│   │   ├── clsLoginScreen.h
│   │   ├── clsMainScreen.h
│   │   └── ... (other screen classes)
│   └── utils/            # Utility classes
│       ├── clsInputValidate.h
│       ├── clsUtil.h
│       ├── Global.h
│       └── InterfaceCommunication.h
├── data/                 # Data persistence files
│   ├── Clients.txt
│   ├── Users.txt
│   ├── Currencies.txt
│   ├── TransferLog.txt
│   └── LoginRegister.txt
├── build/               # Build output directory
├── docs/               # Documentation
│   └── README.md
├── Makefile           # Build configuration
└── CMakeLists.txt     # CMake configuration
```

## Data & Persistence

The app uses plain-text files in the `data/` directory:

- `data/Clients.txt`: client records
- `data/Users.txt`: user accounts and permissions
- `data/Currencies.txt`: currency codes and rates
- `data/TransferLog.txt`: record of transfers
- `data/LoginRegister.txt`: login activity

The executable expects these files to be in the `data/` directory relative to where it's run from.

## Troubleshooting

- Build errors about C++ standard: ensure you pass `-std=c++17` (or newer).
- Runtime cannot find data files: ensure the `data/` directory is in the same location as the executable.
- Permission denied running `./build/main`: make it executable `chmod +x build/main`.
- Non-ASCII console rendering issues on Windows CMD: try Windows Terminal or PowerShell.
- Include path errors: make sure to use `-I./include` when building manually.
