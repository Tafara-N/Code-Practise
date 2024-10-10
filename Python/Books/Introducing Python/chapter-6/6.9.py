#!/usr/bin/env python3

"""
Define three classes: `Bear`, `Rabbit`, and `Octothorpe`.

For each, define only one method: `eats()`.

This should return:
'berries' (Bear),
'clover' (Rabbit), or
'campers' (Octothorpe).

Create one object from each and print what it eats.

"""

class Bear:
    """
    A class representing a bear
    """

    def eats(self) -> str:
        """
        Return what a bear eats

        Returns:
            str:
                Bear eats berries
        """

        return 'berries'

class Rabbit:
    """
    A class representing a rabbit
    """

    def eats(self) -> str:
        """
        Return what a rabbit eats

        Returns:
            str:
                Rabbit eats clover
        """

        return 'clover'

class Octothorpe:
    """
    A class representing an octothorpe
    """

    def eats(self) -> str:
        """
        Return what an octothorpe eats

        Returns:
            str:
                Octothorpe eats campers
        """

        return 'campers'

bear = Bear()
rabbit = Rabbit()
octothorpe = Octothorpe()

print(bear.eats(), "\n")
print(rabbit.eats(), "\n")
print(octothorpe.eats())
