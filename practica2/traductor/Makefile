SRC = src
INC = include
OBJ = obj
BIN = bin
CXX = g++
CPPFLAGS = -Wall -g  -I$(INC) -c


all: $(BIN)/pruebatraductor clean documentacion 
# ************ Generación de documentación ******************
documentacion:
	@ echo "Generando documentación"
	doxygen doc/doxys/Doxyfile

	
# ************ Compilación de módulos ************
$(BIN)/pruebatraductor: $(OBJ)/pruebatraductor.o $(OBJ)/traductor.o $(OBJ)/palabra.o
	@ echo "Se está creando el ejecutable pruebatraductor"
	$(CXX) $^ -o $@
	
$(OBJ)/pruebatraductor.o: $(SRC)/pruebatraductor.cpp $(INC)/traductor.h $(INC)/palabra.h
	@ echo "Se está creando el objeto pruebatraductor.o"
	$(CXX) -I$(INC) -c $< -o $@


$(OBJ)/traductor.o: $(SRC)/traductor.cpp $(INC)/traductor.h
	@ echo "Se está creando el objeto traductor.o"
	$(CXX) -I$(INC) -c $< -o $@

$(OBJ)/palabra.o: $(SRC)/palabra.cpp $(INC)/palabra.h
	@ echo "Se está creando el objeto palabra.o"
	$(CXX) -I$(INC) -c $< -o $@


# ************ Limpieza ************
clean :
	@ echo "Borrando archivos temporales"
	-rm $(OBJ)/* $(SRC)/*~ $(INC)/*~ ./*~

mrproper : clean
	
	-rm $(BIN)/* doc/html/*
