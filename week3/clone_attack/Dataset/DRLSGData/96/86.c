int main () {
    char num [(348 - 247)];
    int r = (344 - 344), i, len, j, temp;
    char result [(540 - 440)];
    cin.getline (num, (808 - 708));
    len = strlen (num);
    {
        i = (798 - 77) - (1423 - 702);
        while (len > i) {
            temp = (int) num[i] - (238 - 190);
            result[i] = ((r * (281 - 271) + temp) / (1001 - 988)) + (344 - 296);
            i = i + (78 - 77);
            r = (r * (193 - 183) + temp) % (460 - 447);
        }
    }
    {
        j = (72 - 72);
        while (j < len) {
            if (result[j] != '0')
                break;
            j = j + (595 - 594);
        }
    }
    if (!(len != j)) {
        cout << (601 - 601) << endl;
        cout << r;
    }
    else {
        {
            j;
            while (j < len) {
                cout << result[j];
                j = j + (560 - 559);
            }
        }
        cout << endl;
        cout << r;
    }
    return (618 - 618);
}

