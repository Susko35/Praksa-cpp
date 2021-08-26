# zadatak2

*build from zadatak2 folder*

`g++ -o lib/Professor.o -c src/Professor.cpp -I include/Professor/`  
`g++ -o lib/Student.o -c src/Student.cpp -I include/Student/`  
`g++ -o lib/main.o -c src/main.cpp -I include/Professor/ -I include/Student/`  
`g++ -o build/zadatak2.exe lib/main.o lib/Professor.o lib/Student.o -I include/Professor/ -I include/Student`  

