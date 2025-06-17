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
- Compare simulation results for different time ranges
- Modular C++ design with header/source separation

---

## 📁 Project Structure

```
GBM-Simulator/
├── include/
│   ├── CSVReader.h              # Handles CSV parsing
│   ├── StockData.h              # Struct for OHLC stock data
│   ├── ParameterCalculation.h   # Calculates mean, volatility, log returns
│   └── GBM.h           # Core GBM simulation logic
│
├── source/
│   ├── CSVReader.cpp
│   ├── ParameterCalculation.cpp
│   └── GBMRunner.cpp
│
├── data/
│   └── exon.csv             # Sample exon mobile stock price CSV
│
├── main.cpp                     # Entry point: calculates and runs GBM
├── CMakeLists.txt               # CMake build configuration
└── README.md
```

---

## 🔧 How to Build

### Configuration
- C++20

## 🧠 Model Used

### Geometric Brownian Motion

$$S_t = S_0 \cdot e^{(\mu - \frac{1}{2}\sigma^2)t + \sigma\sqrt{t}Z}$$

Where:
- $S_0$: initial price
- $\mu$: mean of log returns
- $\sigma$: standard deviation of log returns
- $t$: time (in days)
- $Z$: random value from standard normal distribution

## 🧑‍💻 Author

**Divy Bhavsar**  
[@divybhavsar](https://github.com/divybhavsar214)
