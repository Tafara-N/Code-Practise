#!/usr/bin/env python3

"""
Define these classes: `Laser`, `Claw`, and `SmartPhone`.

Each has only one method: does()

This returns:
'disintegrate' (Laser),
'crush' (Claw), or
'ring' (SmartPhone).

Then, define the class `Robot` that has one instance (object) of each of these.

Define a does() method for the `Robot` that prints what its component objects do.

"""

class Laser:
    """
    A class representing a laser
    """

    def does(self) -> str:
        """
        Return what a laser does

        Returns:
            str:
                Laser disintegrates
        """

        return 'disintegrate'

class Claw:
    """
    A class representing a claw
    """

    def does(self) -> str:
        """
        Return what a claw does

        Returns:
            str:
                Claw crushes
        """

        return 'crush'

class SmartPhone:
    """
    A class representing a smartphone
    """

    def does(self) -> str:
        """
        Return what a smartphone does

        Returns:
            str:
                Smartphone rings
        """

        return 'ring'

class Robot:
    """
    A class representing a robot
    """

    def __init__(self):
        self.laser = Laser()
        self.claw = Claw()
        self.smartphone = SmartPhone()

    def does(self):
        """
        Print what the robot's components do
        """

        print(f'Laser: {self.laser.does()}')
        print(f'Claw: {self.claw.does()}')
        print(f'Smartphone: {self.smartphone.does()}')


robot = Robot()
robot.does()
