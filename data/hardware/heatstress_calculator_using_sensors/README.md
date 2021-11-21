## Heat Stress Detector

### Heat Index:

1. Heat_index:
<p align="center">
  <img width="720" height="450" src="https://github.com/usmhic/Warmning/blob/main/res/img/sensor_prototype/heat_index.png">
</p>
2. Mathematical Model:
<p align="center">
  <img width="720" height="450" src="https://github.com/usmhic/Warmning/blob/main/res/img/sensor_prototype/heat_index_formula.jpg">
</p>

learn more at https://en.wikipedia.org/wiki/Heat_index

### Computer Simulation:
<p align="center">
  <img width="720" height="450" src="https://github.com/usmhic/Warmning/blob/main/res/img/sensor_prototype/simulation.jpg">
</p>

The system is a base for sending data to our project database so that it can be used in the application and the website. The system is able to calculate temperature and humidity and perform a calculation to find the heat stress. The purpose of using it (along with other tools to do the same process) is that the system gives more accurate data than the currently used systems and the speed of response (renewing data every 3 seconds). So the system is temperature and humidity sensors;  It is possible to use hundreds of them (in our model we used two sensors) the data is sent to the Arduino and then it is analyzed, processed and calculated and then sent to an application (We created a special application to read and display sensor data and then send it to the database), on the phone and the information appears on the application with sensor's  location.

### Prototype:
<p align="center">
  <img width="800" height="400" src="https://github.com/usmhic/Warmning/blob/main/res/img/sensor_prototype/sensor.png">
</p

### Results:
<p align="center">
  <img width="720" height="405" src="https://github.com/usmhic/Warmning/blob/main/res/img/sensor_prototype/resultsf.jpg">
</p>

The way we came to send the data's sensors from the application to the database site is by re-reading the data inside the application and removing the existing dots (.) to replace them with a comma (,) ( because the database that we used does not accept dots ); it means that it prevents us from sending data that contains dots,  And after that adding a button that presses it automatically every 3 seconds (because the way we found to send data is by pressing the button every time you need to send information), so every time there is information, the button is automatically pressed, and the data is sent to the database.



### Tools Used:
- Arduino UNO
- 2 DHT-11 sensors
- Bluetooth model
