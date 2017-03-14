java -jar jar/java-cup-11b.jar -interface -parser Parser calc.cup
javac -cp jar/java-cup-11b-runtime.jar:. *.java
java -cp jar/java-cup-11b-runtime.jar:. Calculator
