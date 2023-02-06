# learning-cpp
c++


## Vectors
Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container. Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators. In vectors, data is inserted at the end. Inserting at the end takes differential time, as sometimes the array may need to be extended. Removing the last element takes only constant time because no resizing happens. Inserting and erasing at the beginning or in the middle is linear in time.
### methods
* **begin()** – Returns an iterator pointing to the first element in the vector
* **end()** – Returns an iterator pointing to the theoretical element that follows the last element in the vector
* **rbegin()** – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
* **rend()** – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
* **cbegin()**– Returns a constant iterator pointing to the first element in the vector.
* **cend()** – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
* **crbegin()** – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
* **crend()** – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)

#### capacity
* **size()** – Returns the number of elements in the vector.
* **max_size()** – Returns the maximum number of elements that the vector can hold.
* **capacity()** – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
* **resize(n)** – Resizes the container so that it contains ‘n’ elements.
* **empty()** – Returns whether the container is empty.
* **shrink_to_fit()** – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
* **reserve()** – Requests that the vector capacity be at least enough to contain n elements.

## Errors
**Core Dump (Segmentation fault) in C/C++**
Core Dump/Segmentation fault is a specific kind of error caused by accessing memory that “does not belong to you.” 
When a piece of code tries to do read and write operation in a read only location in memory or freed block of memory, it is known as core dump.
It is an error indicating memory corruption.

## Characteristics of an Object Oriented Programming language
### **Class:**
The building block of C++ that leads to Object-Oriented programming is a Class. It is a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class. A class is like a blueprint for an object.
### **Object:** 
An Object is an identifiable entity with some characteristics and behaviour. An Object is an instance of a Class. When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.

### **Access Modifiers in C++**
Access modifiers are used to implement an important aspect of Object-Oriented Programming known as Data Hiding. 
Access Modifiers or Access Specifiers in a class are used to assign the accessibility to the class members, i.e., they set some restrictions on the class members so that they can’t be directly accessed by the outside functions.

* **There are 3 types of access modifiers available in C++:**
1. Public
2. Private
3. Protected

*If we do not specify any access modifiers for the members inside the class, then by default the access modifier for the members will be Private.*

1. **Public**
All the class members declared under the public specifier will be available to everyone. The data members and member functions declared as public can be accessed by other classes and functions too. The public members of a class can be accessed from anywhere in the program using the direct member access operator (.) with the object of that class. 

2. **Private**
The class members declared as private can be accessed only by the member functions inside the class. They are not allowed to be accessed directly by any object or function outside the class. Only the member functions or the friend functions are allowed to access the private data members of the class.
<br/>
*However, we can access the private data members of a class indirectly using the public member functions of the class*

3. **Protected:** The protected access modifier is similar to the private access modifier in the sense that it can’t be accessed outside of its class unless with the help of a friend class. The difference is that the class members declared as Protected can be accessed by any subclass (derived class) of that class as well.
*This access through inheritance can alter the access modifier of the elements of base class in derived class depending on the mode of Inheritance.*
### **Encapsulation:**
Encapsulation in C++ is defined as the wrapping up of data and information in a single unit. In Object Oriented Programming, Encapsulation is defined as binding together the data and the functions that manipulate them.

* **Features of Encapsulation**
1. We can not access any function from the class directly. We need an object to access that function that is using the member variables of that class. 

* Biz to'g'ridan-to'g'ri sinfdan biron bir funktsiyaga kira olmaymiz. Ushbu sinfning a'zo o'zgaruvchilaridan foydalanadigan ushbu funktsiyaga kirish uchun bizga ob'ekt kerak.
---
2. The function which we are making inside the class must use only member variables, only then it is called encapsulation.

- Biz sinf ichida bajarayotgan funksiya faqat a'zo o'zgaruvchilardan foydalanishi kerak, shundan keyingina u inkapsulyatsiya deb ataladi.
---
3. If we don’t make a function inside the class which is using the member variable of the class then we don’t call it encapsulation.
- Agar biz sinfning a'zo o'zgaruvchisidan foydalanadigan sinf ichida funktsiyani yaratmasak, biz uni inkapsulyatsiya deb atay olmaymiz.
---
4. Increase in the security of data
- Ma'lumotlar havsizligini oshirish
---
5. It helps to control the modification of our data members.
- Bu bizning ma'lumotlar a'zolarimizning o'zgarishini nazorat qilishga yordam beradi.

### **Inheritance**
The capability of a class to derive properties and characteristics from another class is called Inheritance. Inheritance is one of the most important features of Object-Oriented Programming.

Inheritance is a feature or a process in which, new classes are created from the existing classes. The new class created is called “derived class” or “child class” and the existing class is known as the “base class” or “parent class”. The derived class now is said to be inherited from the base class.

When we say derived class inherits the base class, it means, the derived class inherits all the properties of the base class, without changing the properties of base class and may add new features to its own. These new features in the derived class will not affect the base class. The derived class is the specialized class for the base class.

* **Sub Class:** The class that inherits properties from another class is called Subclass or Derived Class.

* **Super Class:** The class whose properties are inherited by a subclass is called Base Class or Superclass. 

#### *Modes of Inheritance: There are 3 modes of inheritance.**
1. Public Mode: If we derive a subclass from a public base class. Then the public member of the base class will become public in the derived class and protected members of the base class will become protected in the derived class.

2. Protected Mode: If we derive a subclass from a Protected base class. Then both public members and protected members of the base class will become protected in the derived class.

3. Private Mode: If we derive a subclass from a Private base class. Then both public members and protected members of the base class will become Private in the derived class.

*The private members in the base class cannot be directly accessed in the derived class, while protected members can be directly accessed. For example, Classes B, C, and D all contain the variables x, y, and z in the below example. It is just a question of access.*

#### **Types Of Inheritance:-**
1. **Single inheritance** <br/>
In single inheritance, a class is allowed to inherit from only one class. i.e. one subclass is inherited by one base class only.

1. **Multiple inheritance** <br/>
Multiple Inheritance is a feature of C++ where a class can inherit from more than one class. i.e one subclass is inherited from more than one base class.

1. **Multilevel inheritance** <br/>
In this type of inheritance, a derived class is created from another derived class.

1. **Hierarchical inheritance** <br/>
In this type of inheritance, more than one subclass is inherited from a single base class. i.e. more than one derived class is created from a single base class.

1. **Hybrid inheritance** <br/>
Hybrid Inheritance is implemented by combining more than one type of inheritance. For example: Combining Hierarchical inheritance and Multiple Inheritance. 

1. **A special case of hybrid inheritance: Multipath inheritance:** 
A derived class with two base classes and these two base classes have one common base class is called multipath inheritance. Ambiguity can arise in this type of inheritance. 

### **Abstraction**
Data abstraction is one of the most essential and important features of object-oriented programming in C++. Abstraction means displaying only essential information and hiding the details. Data abstraction refers to providing only essential information about the data to the outside world, hiding the background details or implementatio

#### **Types of Abstraction:**
1. **Data abstraction** – This type only shows the required information about the data and hides the unnecessary data.
2. **Control Abstraction** – This type only shows the required information about the implementation and hides unnecessary information.

#### **Abstraction using Access Specifiers**
Access specifiers are the main pillar of implementing abstraction in C++. We can use access specifiers to enforce restrictions on class members. For example: <br/>
Kirish spetsifikatsiyalari C++ da abstraksiyani amalga oshirishning asosiy ustuni hisoblanadi. Biz sinf a'zolariga cheklovlarni joriy qilish uchun kirish spetsifikatsiyalaridan foydalanishimiz mumkin. Masalan:


- Members declared as public in a class can be accessed from anywhere in the program. <br/>
Bir sinfda ochiq deb e'lon qilingan a'zolarga dasturning istalgan joyidan kirish mumkin.
---

- Members declared as private in a class, can be accessed only from within the class. They are not allowed to be accessed from any part of the code outside the class. <br/>
Sinfda shaxsiy deb e'lon qilingan a'zolarga faqat sinf ichidan kirish mumkin. Ularga sinfdan tashqarida kodning biron bir qismidan kirishga ruxsat berilmaydi.

* We can easily implement abstraction using the above two features provided by access specifiers. Say, the members that define the internal implementation can be marked as private in a class. And the important information needed to be given to the outside world can be marked as public. And these public members can access the private members as they are inside the class. 

#### **Advantages of Data Abstraction**
1. Helps the user to avoid writing the low-level code
1. Avoids code duplication and increases reusability.
1. Can change the internal implementation of the class independently without affecting the user.
1. Helps to increase the security of an application or program as only important details are provided to the user.
1. It reduces the complexity as well as the redundancy of the code, therefore increasing the readability.
#### Types of Polymorphism
* Compile-time Polymorphism.
* Runtime Polymorphism.

##### Compile-time Polymorphism.
This type of polymorphism is achieved by function overloading or operator overloading.

###### A. Function Overloading
When there are multiple functions with the same name but different parameters, then the functions are said to be overloaded, hence this is known as Function Overloading. Functions can be overloaded by changing the number of arguments or/and changing the type of arguments. In simple terms, it is a feature of object-oriented programming providing many functions to have the same name but distinct parameters when numerous tasks are listed under one function name. There are certain Rules of Function Overloading that should be followed while overloading a function.

###### B. Operator Overloading
C++ has the ability to provide the operators with a special meaning for a data type, this ability is known as operator overloading. For example, we can make use of the addition operator (+) for string class to concatenate two strings. We know that the task of this operator is to add two operands. So a single operator ‘+’, when placed between integer operands, adds them and when placed between string operands, concatenates them. 

##### Runtime Polymorphism.