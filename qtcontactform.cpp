#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>
#include "qtcontactform.h"



QtContactForm::QtContactForm(QWidget *parent) : 
        QFormLayout(parent), firstNameField(new QLineEdit()),
        lastNameField(new QLineEdit()),
        addressField(new QLineEdit()),
        phoneNumberField(new QLineEdit()),
        emailField(new QLineEdit()),
        pincodeField(new QLineEdit())
{
    addRow("<font color = 'purple'>First Name</font><font color = 'red'>*</font>", firstNameField);
    addRow("<font color = 'purple'>Last Name</font>", lastNameField);
    addRow("<font color = 'purple'>Address</font>", addressField);
    addRow("<font color = 'purple'>Phone Number</font><font color = 'red'>*</font>", phoneNumberField);
    addRow("<font color = 'purple'>Email</font>", emailField);
    addRow("<font color = 'purple'>Pincode</font>", pincodeField);
}

void QtContactForm::clear()
{
    firstNameField->setText("");
    lastNameField->setText("");
    addressField->setText("");
    phoneNumberField->setText("");
    emailField->setText("");
    pincodeField->setText("");
}
