# Manipulator_Yuvaan_IITG

**Description:**
The Manipulator is designed in accordance to the demands of the Reconnaissance And Delivery Mission (RDM) and Instrument Deployment and Maintenance Mission (ID&MM). The rover will pick up and deliver the objects to designated locations and to perform a set of precise maintenance and deployment operations.
Our Robotic Manipulator has 5 Degrees of Freedom, controlled remotely from the base station with stock GUI. The complete body is made of aluminium to provide strength while keeping the arm light-weight. It can carry a payload of up to 5 kg in its gripper. The base is designed such that it can be detached from the chassis.

Following are the 4 major structural classification:
1. Links:
      We have used two links. Link one has a certain degree of bent shaped that provides support and range effectiveness. For the skeleton of the links, we have used Warren trusses because of their capability to provide huge strength and at the same time not increase the weight of the arm too much. The Warren Truses use equilateral triangular cuts to spread out the loads and minimize the forces to only compression.
      (image)
      
2. Base:
      The base is a rotating disk encasement, which is rotated by a wheel driven by a high torque motor
      (image)
      
3. End-Effector:
      A bevel gear-based end effector capable of providing 3 controls pitch, roll and grip. Pitch and roll are provided by differential sort of functionality provided by a combination of two servo motors. The two fingered rubber headed grip controlled by a lead screw will faciliate in the task that requires specific holding capabilities like that in holding a cache ,latches, gripping a drawer to open . The controls driven flexibility allows the smooth flow of tasks like operating a joystick, hold and fit the plug inside the socket etc. 
      (image)
      
4. Driving Components:
       We have used two linear actuators in the model, one which is attached to the base and link 1, and the other one is attached between the of link 1 and link 2. Both the actuators have 200mm stroke length and a self-locking maximum force of 1500N. Also, planetary geared dc motors with encoders are used at the base and the bevel gear differential, such that feedback can be taken and rotation can be controlled independently.
       (image)
       
Analysis:
The workspace plot is being plotted with a 1 mm precision using forward kinematics in MATLAB. This gives us the range of motion our manipulator can provided in a plane. To obtain the 3D workspace the complete 2D plot just need to be rotated about the vertical axis that passed through the origin (which is the centre of the base). Such a wide and dynamic workspace will allow effective reach of Manipulator with various different path options
(image)

Control:
6 controls are available for manoeuvring the arm:
Base Rotation
Lower Actuator extension/retraction
Upper Actuator extension/retraction
End-effector roll
End-effector pitch
End-effector gripping action

The manipulator is controlled using Arduino, via ROS-based GUI using rosserial_arduino open-source library
(image)

Future Work:

