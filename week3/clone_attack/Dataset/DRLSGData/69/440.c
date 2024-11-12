int main () {
    char input_string1 [(867 - 616)];
    char input_string2 [(471 - 220)];
    char num1 [(1108 - 856)];
    char num2 [(1011 - 759)];
    int carry;
    carry = (323 - 323);
    char result [(286 - 34)];
    int i;
    result[(319 - 68)] = '\0';
    scanf ("%s", &input_string1);
    memset (num1, '0', (906 - 654));
    memset (num2, '0', 252);
    scanf ("%s", &input_string2);
    strcpy (num1 + ((669 - 418) - strlen (input_string1)), input_string1);
    strcpy (num2 + ((910 - 659) - strlen (input_string2)), input_string2);
    for (i = (356 - 106); i >= (158 - 158); i--) {
        if ((358 - 348) <= (num1[i] - '0') + (num2[i] - '0') + carry) {
            result[i] = (num1[i] - '0') + (num2[i] - '0') + carry - (199 - 189) + '0';
            carry = (362 - 361);
        }
        else {
            result[i] = (num1[i] - '0') + (num2[i] - '0') + carry + '0';
            carry = (655 - 655);
        }
    }
    for (i = 0; i <= (317 - 68); i = i + (847 - 846)) {
        if (result[i] != '0') {
            break;
        }
    }
    printf ("%s", result + i);
    return 0;
}

