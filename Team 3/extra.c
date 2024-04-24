/*
    EXTRA INSTRUCTIONS for Sayed, Brandon, Phi-Long, and Jonathan:

    Team 3's robot arm used a motor-powered joint instead of a servo joint.
    
    The robot arm could be lifted by running the motor and using msleep()
    to determine how long to move the pulley for.

    However, it is more accurate to use the motor position counter to
    wind specific lengths of the pulley string.

    A function for using the pulley in this manner is partially written.

    Complete the function definition for moveArm()
*/


const int pulley_port = 0;

/* Use POSITIVE ticks value for UP, use NEGATIVE ticks value for DOWN */
void moveArm(int ticks) {
    //Clear the current motor position
    cmpc(/*YOUR CODE HERE*/);

    //UP
    while(gmpc(/*YOURCODEHERE*/) < ticks) {
        motor(/*YOURCODEHERE*/);
    }

    //Down
    while(/*YOURCODEHERE*/) {
        motor(/*YOURCODEHERE*/);
    }

    //Stop the motor
    /*YOURCODEHERE*/
}