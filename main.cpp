#include <iostream>

static const int HEX_SIZE = 1000;
static const int ASCII_SIZE = HEX_SIZE / 2;


void read_file(char *buff, const char *file_name);
int hex_to_int(char c);
int hex_to_ascii(char c, char d);
void xor_texts(char *text1, char *text2);

void hex_to_ascii(const char *hex_text, char *ascii_text);

void print_string(const char *string);
const char *byte_to_binary(int x);

int main() {
    char ciphertext1[HEX_SIZE];
    char ciphertext2[HEX_SIZE];
    char ciphertext3[HEX_SIZE];
    char ciphertext4[HEX_SIZE];
    char ciphertext5[HEX_SIZE];
    char ciphertext6[HEX_SIZE];
    char ciphertext7[HEX_SIZE];
    char ciphertext8[HEX_SIZE];
    char ciphertext9[HEX_SIZE];
    char ciphertext10[HEX_SIZE];
    char ciphertext1_ascii[ASCII_SIZE];
    char ciphertext2_ascii[ASCII_SIZE];
    char ciphertext3_ascii[ASCII_SIZE];
    char ciphertext4_ascii[ASCII_SIZE];
    char ciphertext5_ascii[ASCII_SIZE];
    char ciphertext6_ascii[ASCII_SIZE];
    char ciphertext7_ascii[ASCII_SIZE];
    char ciphertext8_ascii[ASCII_SIZE];
    char ciphertext9_ascii[ASCII_SIZE];
    char ciphertext10_ascii[ASCII_SIZE];

    read_file(ciphertext1, "ciphertext1.txt");
    read_file(ciphertext2, "ciphertext2.txt");
    read_file(ciphertext3, "ciphertext3.txt");
    read_file(ciphertext4, "ciphertext4.txt");
    read_file(ciphertext5, "ciphertext5.txt");
    read_file(ciphertext6, "ciphertext6.txt");
    read_file(ciphertext7, "ciphertext7.txt");
    read_file(ciphertext8, "ciphertext8.txt");
    read_file(ciphertext9, "ciphertext9.txt");
    read_file(ciphertext10, "ciphertext10.txt");

    print_string("Cipher Texts:");
    print_string(ciphertext1);
    print_string(ciphertext2);
    print_string(ciphertext3);
    print_string(ciphertext4);
    print_string(ciphertext5);
    print_string(ciphertext6);
    print_string(ciphertext7);
    print_string(ciphertext8);
    print_string(ciphertext9);
    print_string(ciphertext10);

    hex_to_ascii(ciphertext1, ciphertext1_ascii);
    hex_to_ascii(ciphertext2, ciphertext2_ascii);
    hex_to_ascii(ciphertext3, ciphertext3_ascii);
    hex_to_ascii(ciphertext4, ciphertext4_ascii);
    hex_to_ascii(ciphertext5, ciphertext5_ascii);
    hex_to_ascii(ciphertext6, ciphertext6_ascii);
    hex_to_ascii(ciphertext7, ciphertext7_ascii);
    hex_to_ascii(ciphertext8, ciphertext8_ascii);
    hex_to_ascii(ciphertext9, ciphertext9_ascii);
    hex_to_ascii(ciphertext10, ciphertext10_ascii);

    print_string("\nCipher Texts (in ASCII):");
    print_string(ciphertext1_ascii);
    print_string(ciphertext2_ascii);
    print_string(ciphertext3_ascii);
    print_string(ciphertext4_ascii);
    print_string(ciphertext5_ascii);
    print_string(ciphertext6_ascii);
    print_string(ciphertext7_ascii);
    print_string(ciphertext8_ascii);
    print_string(ciphertext9_ascii);
    print_string(ciphertext10_ascii);

    print_string("\nCipher Text 1 XOR Cipher Texts 2-10:");
    xor_texts(ciphertext1_ascii, ciphertext2_ascii);
    xor_texts(ciphertext1_ascii, ciphertext3_ascii);
    xor_texts(ciphertext1_ascii, ciphertext4_ascii);
    xor_texts(ciphertext1_ascii, ciphertext5_ascii);
    xor_texts(ciphertext1_ascii, ciphertext6_ascii);
    xor_texts(ciphertext1_ascii, ciphertext7_ascii);
    xor_texts(ciphertext1_ascii, ciphertext8_ascii);
    xor_texts(ciphertext1_ascii, ciphertext9_ascii);
    xor_texts(ciphertext1_ascii, ciphertext10_ascii);

    print_string("\nCipher Text 2 XOR Cipher Texts 3-10:");
    xor_texts(ciphertext2_ascii, ciphertext3_ascii);
    xor_texts(ciphertext2_ascii, ciphertext4_ascii);
    xor_texts(ciphertext2_ascii, ciphertext5_ascii);
    xor_texts(ciphertext2_ascii, ciphertext6_ascii);
    xor_texts(ciphertext2_ascii, ciphertext7_ascii);
    xor_texts(ciphertext2_ascii, ciphertext8_ascii);
    xor_texts(ciphertext2_ascii, ciphertext9_ascii);
    xor_texts(ciphertext2_ascii, ciphertext10_ascii);

    print_string("\nCipher Text 3 XOR Cipher Texts 4-10:");
    xor_texts(ciphertext3_ascii, ciphertext4_ascii);
    xor_texts(ciphertext3_ascii, ciphertext5_ascii);
    xor_texts(ciphertext3_ascii, ciphertext6_ascii);
    xor_texts(ciphertext3_ascii, ciphertext7_ascii);
    xor_texts(ciphertext3_ascii, ciphertext8_ascii);
    xor_texts(ciphertext3_ascii, ciphertext9_ascii);
    xor_texts(ciphertext3_ascii, ciphertext10_ascii);

    print_string("\nCipher Text 4 XOR Cipher Texts 5-10:");
    xor_texts(ciphertext4_ascii, ciphertext5_ascii);
    xor_texts(ciphertext4_ascii, ciphertext6_ascii);
    xor_texts(ciphertext4_ascii, ciphertext7_ascii);
    xor_texts(ciphertext4_ascii, ciphertext8_ascii);
    xor_texts(ciphertext4_ascii, ciphertext9_ascii);
    xor_texts(ciphertext4_ascii, ciphertext10_ascii);

    print_string("\nCipher Text 5 XOR Cipher Texts 6-10:");
    xor_texts(ciphertext5_ascii, ciphertext6_ascii);
    xor_texts(ciphertext5_ascii, ciphertext7_ascii);
    xor_texts(ciphertext5_ascii, ciphertext8_ascii);
    xor_texts(ciphertext5_ascii, ciphertext9_ascii);
    xor_texts(ciphertext5_ascii, ciphertext10_ascii);

    print_string("\nCipher Text 6 XOR Cipher Texts 7-10:");
    xor_texts(ciphertext6_ascii, ciphertext7_ascii);
    xor_texts(ciphertext6_ascii, ciphertext8_ascii);
    xor_texts(ciphertext6_ascii, ciphertext9_ascii);
    xor_texts(ciphertext6_ascii, ciphertext10_ascii);

    print_string("\nCipher Text 7 XOR Cipher Texts 8-10:");
    xor_texts(ciphertext7_ascii, ciphertext8_ascii);
    xor_texts(ciphertext7_ascii, ciphertext9_ascii);
    xor_texts(ciphertext7_ascii, ciphertext10_ascii);

    print_string("\nCipher Text 8 XOR Cipher Texts 9-10:");
    xor_texts(ciphertext8_ascii, ciphertext9_ascii);
    xor_texts(ciphertext8_ascii, ciphertext10_ascii);

    print_string("\nCipher Text 9 XOR Cipher Text 10:");
    xor_texts(ciphertext9_ascii, ciphertext10_ascii);

    return 0;
}

void print_string(const char *string) {
    printf("%s\n", string);
}

void hex_to_ascii(const char *hex_text, char *ascii_text) {
    int length = (int) strlen(hex_text);
    int i;
    int j = 0;
    char buf = 0;
    for(i = 0; i < length; i++){
        if(i % 2 != 0){
            ascii_text[j] = (char) hex_to_ascii(buf, hex_text[i]);
            j++;
        }else{
            buf = hex_text[i];
        }
    }
}

void read_file(char *buff, const char *file_name) {
    FILE *f = fopen(file_name, "r");
    fgets(buff, HEX_SIZE, f);
    fclose(f);
}

int hex_to_int(char c) {
    int first = c / 16 - 3;
    int second = c % 16;
    int result = first*10 + second;
    if(result > 9) result--;
    return result;
}

int hex_to_ascii(char c, char d) {
    int high = hex_to_int(c) * 16;
    int low = hex_to_int(d);
    return high+low;
}


void xor_texts(char *text1, char *text2) {
    int result[HEX_SIZE];
    int i;
    for (i = 0; i < HEX_SIZE; ++i) {
        result[i] = (text1[i] ^ text2[i]);
        printf("%s ", byte_to_binary(result[i]));
//        printf("%c ", result[i]);
        //printf("%i ", result[i]);
    }
    printf("\n");
}

const char *byte_to_binary(int x) {
    static char b[9];
    b[0] = '\0';

    int z;
    for (z = 128; z > 0; z >>= 1) {
        strcat(b, ((x & z) == z) ? "1" : "0");
    }

    return b;
}