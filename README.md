# Programming Ultrasonic Sensor and Servo Motor



This task is about how to control a Servo Motor using an HC-SR04 Ultrasonic Sensor and Arduino Uno. When an object is detected at a distance of 10 cm or less, the servo moves to 90°.When the object moves farther than 10 cm, the servo returns to 0°.

## Components

- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- SG90 Servo Motor
- Jumper Wires

## Connections

| Component | Pin | Arduino |
|---|---|---|
| HC-SR04 | VCC | 5V |
| HC-SR04 | GND | GND |
| HC-SR04 | TRIG | D9 |
| HC-SR04 | ECHO | D10 |
| Servo | Signal | D3 |
| Servo | VCC | 5V |
| Servo | GND | GND |

## How It Works

The HC-SR04 measures the distance between the sensor and an object.

- Distance ≤ 10 cm → Servo moves to 90°
- Distance > 10 cm → Servo returns to 0°

## Experiments

The activation distance was changed from 10 cm to 15 cm to observe the system response.

The servo angle was also tested using different values such as 180°.

## Simulation 
<img width="1567" height="878" alt="Screenshot 2026-08-24 163051" src="https://github.com/user-attachments/assets/79036443-012e-4a0c-8c8d-8430c076d9b1" />



## Demonstration

The following video demonstrates the operation of the ultrasonic sensor
and servo motor.

1. the original task :
   



https://github.com/user-attachments/assets/5c3dbf91-15ea-4fe3-9a22-c3bb70addb3f



2. experimenting the change from 10cm to 15cm :
   



https://github.com/user-attachments/assets/d8b6d6c3-6bfd-4380-85ec-f55bbeb6c9f3



3. experimenting the change from 90° to 180°:

   

https://github.com/user-attachments/assets/ec57e630-454a-4a0f-94c4-ebee4e220e17

