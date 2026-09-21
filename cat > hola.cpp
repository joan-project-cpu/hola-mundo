cat > hola.cpp << 'EOF'
#include <iostream>
int main() {
    std::cout << "Hola, mundo desde C++" << std::endl;
    return 0;
}
EOF
g++ hola.cpp -o hola
./hola