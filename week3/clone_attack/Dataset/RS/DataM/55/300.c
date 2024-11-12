int change2Dec (char *number, int ws47h9oK5, int DxRHBLF) {
    int result;
    result = 0;
    {
        int i;
        i = 0;
        while (ws47h9oK5 > i) {
            int position;
            position = ws47h9oK5 - i;
            int numberBit;
            numberBit = 0;
            int currentBitValue;
            currentBitValue = numberBit;
            if ('0' <= number[i] && number[i] <= '9') {
                numberBit = number[i] - '0';
            }
            else {
                if (number[i] >= 'a' && 'z' >= number[i]) {
                    numberBit = number[i] - 'a' + (413 - 403);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    };
                }
                else {
                    numberBit = number[i] - 'A' + (433 - 423);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                };
            }
            i = i + 1;
            for (int j = 1;
            j < position; j++) {
                currentBitValue *= DxRHBLF;
            }
            result += currentBitValue;
        };
    }
    return result;
}

int changeDec2NewBase (int decNumber, int newBase, char *newNumber) {
    int length;
    length = 0;
    int bitValue [100];
    while (decNumber / newBase > 0) {
        bitValue[length++] = decNumber % newBase;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        decNumber /= newBase;
    }
    bitValue[length++] = decNumber;
    {
        int i = length - 1, j = 0;
        while (i >= 0) {
            int ssNFXd = bitValue[i];
            i = i - 1;
            if (ssNFXd < 10)
                newNumber[j] = ssNFXd + '0';
            else
                newNumber[j] = ssNFXd + 'A' - 10;
            j = j + 1;
        };
    }
    return length;
}

int main () {
    int len_newNumber;
    char newNumber [100];
    char number [100];
    int newBase;
    int DxRHBLF;
    int ws47h9oK5 = strlen (number);
    int decNumber = change2Dec (number, ws47h9oK5, DxRHBLF);
    cin >> DxRHBLF >> number >> newBase;
    len_newNumber = changeDec2NewBase (decNumber, newBase, newNumber);
    newNumber[len_newNumber] = NULL;
    cout << newNumber << endl;
    return 0;
}

