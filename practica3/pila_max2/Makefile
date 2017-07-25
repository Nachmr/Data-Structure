SRC = src
INC = include
OBJ = obj
BIN = bin
CXX = g++
CPPFLAGS = -Wall -g  -I$(INC) -c

crear: $(OBJ)/cola.o $(OBJ)/VD.o $(OBJ)/lista.o $(OBJ)/Pila_max_Cola.o $(OBJ)/Pila_max_VD.o $(OBJ)/Pila_max_List.o $(OBJ)/Pila_max.o $(OBJ)/usopilas_max.o $(BIN)/usopilas_max
 

$(BIN)/usopilas_max: $(OBJ)/usopilas_max.o $(OBJ)/Pila_max_Cola.o $(OBJ)/Pila_max_VD.o $(OBJ)/Pila_max_List.o $(OBJ)/Pila_max.o
	$(CXX) -o $(BIN)/usopilas_max $(OBJ)/usopilas_max.o $(OBJ)/Pila_max_Cola.o $(OBJ)/Pila_max_VD.o $(OBJ)/Pila_max_List.o $(OBJ)/Pila_max.o

$(OBJ)/usopilas_max.o: $(SRC)/usopilas_max.cpp $(INC)/Pila_max_Cola.h $(INC)/Pila_max_VD.h $(INC)/Pila_max_List.h
	$(CXX) $(CPPFLAGS)  $(SRC)/usopilas_max.cpp  -o $(OBJ)/usopilas_max.o




$(OBJ)/Pila_max.o: $(SRC)/Pila_max.cpp $(INC)/Pila_max_Cola.h $(INC)/Pila_max_VD.h $(INC)/Pila_max_List.h
	$(CXX) $(CPPFLAGS)  $(SRC)/Pila_max.cpp  -o $(OBJ)/Pila_max.o


$(OBJ)/Pila_max_List.o: $(SRC)/Pila_max_List.cpp 
	$(CXX) $(CPPFLAGS)  $(SRC)/Pila_max_List.cpp  -o $(OBJ)/Pila_max_List.o 

$(OBJ)/Pila_max_VD.o: $(SRC)/Pila_max_VD.cpp 
	$(CXX) $(CPPFLAGS)  $(SRC)/Pila_max_VD.cpp  -o $(OBJ)/Pila_max_VD.o 

$(OBJ)/Pila_max_Cola.o: $(SRC)/Pila_max_Cola.cpp 
	$(CXX) $(CPPFLAGS)  $(SRC)/Pila_max_Cola.cpp  -o $(OBJ)/Pila_max_Cola.o 

$(OBJ)/cola.o: $(INC)/cola.h 
	$(CXX) $(CPPFLAGS)  $(INC)/cola.h  -o $(OBJ)/cola.o 

$(OBJ)/VD.o: $(INC)/VD.h
	$(CXX) $(CPPFLAGS)  $(INC)/VD.h  -o $(OBJ)/VD.o 

$(OBJ)/lista.o: $(INC)/Lista.h 
	$(CXX) $(CPPFLAGS)  $(INC)/Lista.h  -o $(OBJ)/lista.o 


    


# ************ Generación de documentación ******************
documentacion:
	doxygen doc/doxys/Doxyfile


# ************ Limpieza ************
clean :
	-rm $(OBJ)/* $(SRC)/*~ $(INC)/*~ ./*~

mrproper : clean
	-rm $(BIN)/* doc/html/*
