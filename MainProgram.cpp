// ============================================================
// CMP1002 - Lab: Encapsulation and Invariants
// Student Version - MainProgram.cpp
// ============================================================
// Instructions:
//   Complete all TODO sections below.
//   Do NOT modify function signatures or class interfaces.
//   All logic must remain in this single file.
// ============================================================

#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>

using namespace std;

// ================================
// CLASS DEFINITIONS
// ================================

// --------------------------------------------------
// Class: Temperature
// Represents a temperature in Celsius.
// Invariant: temperature must be >= -273.15 (absolute zero)
// --------------------------------------------------
class Temperature {
private:
    double celsius_;

public:
    // Constructor: initialize with a Celsius value.
    // Must enforce the invariant.
    // Throw std::invalid_argument if value < -273.15
    explicit Temperature(double celsius) {
        // TODO: Validate and set celsius_
        if (celsius < -273.15) {
            throw invalid_argument("Temperature cannot be below absolute zero");
        }
        celsius_ = celsius;
    }

    // Getter: return the temperature in Celsius
    double getCelsius() const {
        // TODO: Implement
        return celsius_;
    }

    // Getter: return the temperature converted to Fahrenheit
    // Formula: F = C * 9/5 + 32
    double getFahrenheit() const {
        // TODO: Implement
        return celsius_ *9.0 / 5.0 + 32;
    }

    // Setter: update the temperature in Celsius
    // Must enforce the invariant.
    // Throw std::invalid_argument if value < -273.15
    void setCelsius(double celsius) {
        // TODO: Implement
        if (celsius < -273.15) {
            throw invalid_argument("Temperature cannot be below absolute zero");
        }
        celsius_ = celsius;
    }
};
