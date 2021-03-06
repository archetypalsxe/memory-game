#ifndef Controller_h
#define Controller_h

#include "Interface.h"
#include "Sequence.h"
#include "User.h"

using namespace std;

/**
 * The class that controls and orchestrates the game
 */
class Controller
{
    public:
        /**
         * Constructor
         */
        Controller();
        /**
         * Initiates the game
         */
        void start();
    protected:
        /**
         * Object for controlling the interface to the user
         */
        Interface interface;
        /**
         * The sequence object that will be used throughout the game
         */
        Sequence sequence;
        /**
         * The user of the game
         */
        User user;

        /**
         * Have the user attempt to enter the sequence. Returns whether or
         * not the entire sequence was entered successfully or not
         */
        bool getSequenceAttempt();
        /**
         * A successful attempt was made at the sequence
         */
        void correctSequenceAttempt();
        /**
         * An unsuccessful attempt was made at the sequence
         */
        void incorrectSequenceAttempt();
        /**
         * The main loop where we display everything to the user and get
         * them to input everything they can remember
         */
        void mainLoop();
};

#endif
