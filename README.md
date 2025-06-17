# 📈 Linear Regression in C
This project demonstrates how to implement simple linear regression from scratch using the C programming language. It calculates the slope (m) and intercept (c) of the best-fit line for a given set of data points using the least squares method and predicts the output values based on the regression model.

## 🚀 Features


Computes the mean of a dataset


Calculates variance and covariance


Determines regression coefficients (slope and intercept)


Makes predictions based on the linear model


Outputs the predicted y-values for a given set of x-values



## 🧠 Algorithm Used
The model uses the following formulas:


Mean (μ) = (Σx) / n


Variance (σ²) = Σ(x - μ)²


Covariance (x, y) = Σ(x - μₓ)(y - μᵧ)


Slope (m) = Cov(x, y) / Var(x)


Intercept (c) = μᵧ - m × μₓ


Prediction (ŷ) = m × x + c



## 🧪 Example Data
int x[] = {1,2,3,4,5,6,7,8,9,10};
int y[] = {2,3,5,7,11,13,17,19,23,29};

These are sample data points representing x and y values. The regression model tries to fit a line through these points.

## 🛠️ Compilation &amp; Execution


Compile the code:

```
gcc lr.c -o lr
```


Run the program:

```
./lr
```

## 📦 Output
Example output:
Slope (m) : 2.74
Intercept (c) : -1.20
Predictions:
x = 1 ---&gt; y = 1.54
x = 2 ---&gt; y = 4.28
...
x = 10 ---&gt; y = 26.20


## 📂 File Structure


linear_regression.c – Main C source file containing all logic


README.md – Project documentation (this file)



## 📚 Concepts Involved


Linear regression


Statistics (mean, variance, covariance)


Pointer manipulation in C


Array handling


Function decomposition



## ✅ To Do


 Add support for reading data from a file


 Implement evaluation metrics like RMSE


 Extend to multiple linear regression



## 📄 License
This project is open-source and available under the MIT License.
