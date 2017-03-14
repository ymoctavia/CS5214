********************
Name: Yang Mo
Matric No: A0091836X
********************


Running Instructions:

1. unzip the zipped file
2. Go to cup folder: cd cup
3. Compile and run the calculator: 

Method 1:
	Step 1:  java -jar jar/java-cup-11b.jar -interface -parser Parser calc.cup
	Step 2:  javac -cp jar/java-cup-11b-runtime.jar:. *.java
	Step 3:  java -cp jar/java-cup-11b-runtime.jar:. Calculator
Method 2:
	bash makeCalc.sh



********************
Supported Functions:
********************

Function   	Meaning			Usage			Example
+ - * /   	basic ones		A+B			1+2–3*4/5
^ 		power			A^B			2^4, (2+1)^(2+2)
%		mod			A%B			10%3
log		log			log(A,B), Base is A	log(10,100), log((11-1), 100)
ln		log with base e		lnA, Base is e		ln3, ln(100-2) 
lt		log with base 10	ltA, Base is 10		lt10, lt(101-1)
sqrt		square root		sqrtA			sqrt4, sqrt(99+1)
sin,cos,tan	trigonometric		sinA, cosA, tanA	sin30, sin(20+10)
Negative sign - 			-A			-10,-20
(,)		parenthesis		(A)			log((2+2),4^4)




