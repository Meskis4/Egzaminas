cmake CMakeLists.txt
cmake --install .
cmake --build .
move "input.txt" "Debug\input.txt"
cd Debug\
Egzaminas.exe
pause
