# DRM-Drive
## Relay based DC Motor Driver with Dynamic Braking

Better control of the robot can widen your path to victory. The engine of the robotic vehicle is mostly based on electric motors, especially DC or PMDC motors. In most cases, people use DPDT switches to control the direction of rotation of the PMDC motors for controlling the locomotion. But by only changing the rotational direction of motors you will not get any precise control. This means you cannot stop the vehicle at the desired position when you want because when the vehicle is moving that has inertia so that the vehicle will go further instead of stopping at that exact position. Besides this, the slopes create more problems in the tracks. The vehicles try to run freely on the slopes as they don’t have any brakes on them.


To get precise control over your vehicle you need to apply brakes to that. But as the size of vehicles are not so large, applying mechanical brakes to the motors is not so easy. Besides this the price of the mechanical or electromagnetic disc brake is also very high. So for that reason attaching a mechanical or electromagnetic disc brake is also not feasible from the price point.


But there is a term known as dynamic braking in traction. Dynamic braking is a type of braking where we don’t need to put any external brakes but by doing some tricks in the motors we can mechanically lock the shaft of the motor in a fixed position.


In case of PMDC motors, if we short the terminal of the motor through a resistance or directly, we can simply notice that the shaft of the motor is mechanically locked in position. So now we have to apply power to the motor while running and remove the power and short the terminal of the motor while stopping. But doing this by hand is not possible because it is not feasible to short the terminal of the motor instantly after removing the power.


So now we need some kind of circuit which will do exactly the same as said previously. But designing this type of circuit is not so easy for beginners, for that reason I came up with my circuit.


I designed a Motor driver module which is based on relays. This board have some features like –

**Features:**

- Dual Channel
- Dynamic braking
- Option for Enable or Disable Dynamic braking
- Can be controlled from very low power PUSH or DPDT switches
- Can be driven from micro controllers with the help of opto driver board
- Voltage supply for the motor 0-28 volt D.C.
- Load current (Motor current) up to 10 amps. in each channel
- LED indicator for direction change of the motor

**Specifications:**

- Motor supply voltage: 0-28 volt D.C.
- Motor Current: **0-10** amp. in each channel
- Relay circuit voltage: 12 volt D.C.
- Relay circuit current: 120 mAmp while running
- Power Connectors: 126 Screw terminals
- Motor Connectors: 126 Screw terminals
- Relay power & signal connectors: Relimate connectors
- Indicators: Directional Change LED indicator
- Mounting system: 3 m.m. holes in each corner
- Board size : 126.5*75*16.5 (mm)
- Product weight: 80 Grams.

### **DRM Drive Pinout:**

![alt text](https://github.com/circuiTician/DRM-Drive/blob/main/DRM%20pinout.png)


### **DRM Drive Arduino Connection:**

![alt text](https://github.com/circuiTician/DRM-Drive/blob/main/DRM%20with%20Arduino.png)


### **DRM Drive with DPDT:**

![alt text](https://github.com/circuiTician/DRM-Drive/blob/main/DRM%20with%20DPDT.png)


### **DRM Drive with Push Switches:**

![alt text](https://github.com/circuiTician/DRM-Drive/blob/main/DRM%20with%20push.png)


### **Dynamic Brake Enable & Disable:**

![alt text](https://github.com/circuiTician/DRM-Drive/blob/main/SHORTING.png)

### **CODE:**
[Ardino Code](https://github.com/circuiTician/DRM-Drive/blob/main/RDM_code.ino)



# OPTO-Drive
**Featurs:**

- 4 channel
- Logic level input 3.3 volt & 5 volt
- Noise suppression in switching circuits
- I/O isolation for micro controllers

**Specifications:**

- Relay circuit voltage: 12 volt D.C.
- Relay circuit current: 120 mAmp while running
- Power Connectors: 126 Screw terminals
- Motor Connectors: 126 Screw terminals
- Relay power & signal connectors: Relimate connectors
- Indicators: Directional Change LED indicator
- Mounting system: 3 m.m. holes in each corner
- Board size: 126.5*75*16.5(mm.)
- Product weight: 80 Grams.


### **OPTO-Drive Pinout:**

![alt text](https://github.com/circuiTician/DRM-Drive/blob/main/OD%20pinout.png)







