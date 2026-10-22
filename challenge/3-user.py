#!/usr/bin/python3
"""3. User password"""

class User:
    """My user class"""
    def __init__(self):
        """Initialize user"""
        self.__password = None

    @property
    def password(self):
        """Password getter"""
        return self.__password

    @password.setter
    def password(self, pwd):
        """Password setter"""
        if pwd is None or not isinstance(pwd, str):
            self.__password = ""
        else:
            self.__password = pwd

    def is_valid_password(self, pwd):
        """Check if password is valid"""
        if pwd is None or not isinstance(pwd, str):
            return False
        return pwd == self.__password