'''
File: ics_parser.py
Author: Michael Cooper

Description: This file parses .ics files, and extracts the email addresses of
non-organization employees who have sent and received invitations to events on the
calendar.
'''

import re

def isOrganizationEmail(oragnization, email):
    '''
    Returns whether or not the email address entered into the
    function is a organization email address.
    '''
    if organization == "":
        return
    return re.search("organization", email) != None

def isValidEmail(email):
    '''
    Returns whether or not the email address entered into the function
    matches the regular expression for a valid email address.
    '''
    pattern = "(^[a-zA-Z0-9.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+$)"
    return re.match(pattern, email) != None

def isGibberishEmail(email):
    '''
    Returns whether or not the email address entered into the function
    is a Google Calendar or Google Notifications email.
    '''
    pattern1 = ".*@google.com"
    pattern2 = ".*@groups.google.com"
    return re.search(pattern1, email)!= None or re.search(pattern2, email) != None

def findEmails(fileName, yourOrg = ""):
    '''
    Tokenizes the .ics file "fileName" by colons, then adds tokenized elements
    which are valid emails (follow an email regex pattern, is not a Google
    Calendar or Google Notifications email, and is not an organization email) to the
    list newEmailList. It then iterates over the list emailList, and prints out
    one email address per line.
    '''
    emailList = []

    f = open(fileName, "r", encoding='utf-8')
    # Remove all newlines because they created problems with the regex
    # when the \n was in the middle of an email address.
    fLine = f.read().replace('\n', ':')

    '''
    Email addresses in a .ics file are formatted as follows:
        ATTENDEE;CUTYPE=INDIVIDUAL;ROLE=REQ-PARTICIPANT;PARTSTAT=NEEDS-ACTION;
        CN=Br
ian Hoffman;X-NUM-GUESTS=0:mailto:brian@startx.stanford.edu
    Note that the email is preceded by a comma and completed with a newline.
    By replaceing all newlines with colons, and tokenizing the document by
    colons, certain elements in the tokenized document will contain email
    addresses, which can then be checked for email address validity and
    added to the list of emails to be returned.
    '''
    
    tokenizedLine = fLine.split(":")
    for elem in tokenizedLine:
    # Check to make sure the email is not a Google Calendar, Google Notifications,
    # or organization email, which would not be useful for an email campaign.
        if isValidEmail(elem) and not isOrganizationEmail(org, elem) and not isGibberishEmail(email):
            emailList.append(elem)

    for i in emailList:
        print(i)
    # This outut was manually copied and pasted into a .txt file - then
    # removeDuplicates(fileName) was run on the .txt file.

def removeDuplicates(fileName):
    '''
    Iterates over the text file "filename", and creates a list containing
    all non-duplicate values contained in the text file. It then prints out
    each of the emails in the text file, one per line.
    The one per line format makes it easy to copy/paste into a Google Sheet
    column, with one email address per row.
    '''
    fileList = []

    f = open(fileName, "r")
    for line in f:
        if line not in fileList:
            fileList.append(line)

    for i in fileList:
        print(i, end='')

