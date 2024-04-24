/*
    EXTRA INSTRUCTIONS for Anh Thu, Nataly, and Adara:

    Team 2's robot arm was large and required the arm joint to rotate slowly
    to avoid breaking.
    
    They wrote a function to slowly move the servo by:
    - Moving the servo +1 or -1 tick at a time
    - Pausing between each tick to increase the total rotation time

    The function is partially defined for you below.
    Finish filling out the definition for moveServo().
*/

void moveServo(int port, int target_position) {
    //Get the current servo position
    int current_position = get_servo_position(port);


    //Going up
    while(/* YOUR CODE HERE */) {
        current_position++; //Increase our position by 1

        set_servo_position(/* YOUR CODE HERE */); //Move servo to new position

        msleep(/* YOUR CODE HERE */); //Pause
    }


    //Going down
    while(/* YOUR CODE HERE */) {
        current_position--; //Decrease our position by 1

        set_servo_position(/* YOUR CODE HERE */); //Move servo to new position

        msleep(/* YOUR CODE HERE */); //Pause
    }
}