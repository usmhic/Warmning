# Pattern Recognition
Data mining can help us, it is generally an iterative and interactive discovery process.
The goal of this process is to rule, associations,  changes, anomalies, statistically significant structures, and mine patterns from large amount of data.
Furthermore, the mined results should be valid, useful, and understandable. In our case it will be the predictions heat related risks.

So the objective is apply neural network and data mining techniques to build a forecasting System.

<p align="center">
  <img width="700" height="100" src="https://github.com/usmhic/Warmning/blob/main/res/img/pattern_recognition/pattern.png">
</p

## A forecasting usually involves five basic steps:

### 1. Problem definition:
Often this is the most difficult part of forecasting. Defining the problem carefully requires an understanding of the way the forecasts will be used, who requires the forecasts, and how the forecasting function fits within the organization requiring the forecasts.
In our case it is the heat problem.

### 2. Gathering information:
There are always at least two kinds of information required: (a) statistical data, and (b) the accumulated expertise of the people who collect the data and use the forecasts. and we have added another type of data provided by the hardware.

### 3. Preliminary (exploratory) analysis:
Always start by graphing the data. Are there consistent patterns? Is there a significant trend? Is seasonality important? Are there any outliers in the data that need to be explained by those with expert knowledge?
All this is explained in detail in this folder: https://github.com/Innanov/Warmning/blob/main/data/other/graphical_visualization

### 4. Choosing and fitting models:
The best model to use depends on the availability of data, the strength of relationships between the forecast variable and any explanatory variables, and the way in which the forecasts are to be used. It is common to compare two or three potential models. Each model is itself an artificial construct that is based on a set of assumptions (explicit and implicit) and usually involves one or more parameters which must be estimated using the known data. And we can use regression models , exponential smoothing methods , Box-Jenkins ARIMA models, Dynamic regression models , Hierarchical forecasting , and several advanced methods including neural networks and vector autoregression.

### 5. Using and evaluating a forecasting model:
Once a model has been selected and its parameters estimated, the model is used to make forecasts. The performance of the model can only be properly evaluated after the data for the forecast period have become available. A number of methods have been developed to help in assessing the accuracy of forecasts.
