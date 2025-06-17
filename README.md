# 📈 GBM-Based Stock Price Simulator (C++)

This project simulates future stock prices using the **Geometric Brownian Motion (GBM)** model. It calculates statistical parameters from historical data and applies stochastic modeling to estimate future values.

---

## 🚀 Features

- Read and parse historical stock data from CSV
- Compute:
  - Log returns
  - Mean return (μ)
  - Volatility (σ)
  - Z-score (optional)
- Simulate future stock prices using the **Geometric Brownian Motion** model
- Compare simulation results for different time ranges (1 year vs 5 years)
- Modular C++ design with header/source separation

---

## 📁 Project Structure

```
GBM-Simulator/
├── include/
│   ├── CSVReader.h              # Handles CSV parsing
│   ├── StockData.h              # Struct for OHLC stock data
│   ├── ParameterCalculation.h   # Calculates mean, volatility, log returns
│   └── GBMSimulator.h           # Core GBM simulation logic
│
├── source/
│   ├── CSVReader.cpp
│   ├── ParameterCalculation.cpp
│   └── GBMSimulator.cpp
│
├── data/
│   └── tesla_5y.csv             # Sample Tesla stock price CSV
│
├── main.cpp                     # Entry point: calculates and runs GBM
├── CMakeLists.txt               # CMake build configuration
└── README.md
```

---

## 🔧 How to Build

### Prerequisites
- C++17 or later
- CMake (≥ 3.15)
- A C++ compiler (GCC, Clang, or MSVC)

### Build Instructions

```bash
git clone https://github.com/your-username/GBM-Simulator.git
cd GBM-Simulator
mkdir build && cd build
cmake ..
make
```

## 📊 Usage

Make sure your stock CSV file is in `data/` and structured like:

```csv
Date,Close/Last,Volume,Open,High,Low
06/13/2025,$185.23,128964300,$183.97,$187.99,$183.30
...
```

Dates must be ordered oldest to newest

Run the executable:

```bash
./GBM-Simulator
```

## 🧠 Model Used

### Geometric Brownian Motion

The formula for the simulated price is:

$$S_t = S_0 \cdot e^{(\mu - \frac{1}{2}\sigma^2)t + \sigma\sqrt{t}Z}$$

Where:
- $S_0$: initial price
- $\mu$: mean of log returns
- $\sigma$: standard deviation of log returns
- $t$: time (in days)
- $Z$: random value from standard normal distribution

## 📌 Future Improvements

- Monte Carlo simulation
- Plotting simulated results
- Multi-asset support
- Predictive error tracking
- Integrate with Python or gnuplot for graphing

## 🧑‍💻 Author

**Divy Bhavsar**  
[@divybhavsar](https://github.com/divybhavsar)
