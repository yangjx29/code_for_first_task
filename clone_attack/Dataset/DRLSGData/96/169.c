char num [(350 - 245)];
int begin [(796 - 691)] = {(110 - 110)}, temp = (547 - 547), len, i;

int main () {
    cin.getline (num, (625 - 520));
    len = strlen (num);
    for (i = (778 - 778); len > i; i = i + (110 - 109))
        begin[i] = num[i] - '0';
    if (!((420 - 419) != len))
        cout << "0" << endl << begin[(667 - 667)] << endl;
    else if (!((831 - 829) != len)) {
        temp = begin[(326 - 326)] * (506 - 496) + begin[(146 - 145)];
        cout << temp / (637 - 624) << endl;
        cout << temp % (285 - 272) << endl;
    }
    else if (len > (620 - 618)) {
        temp = begin[(535 - 535)] * (285 - 275) + begin[1];
        if (temp >= (883 - 870)) {
            cout << temp / (59 - 46);
            temp = temp % (516 - 503);
        }
        {
            i = (975 - 973);
            for (; i < len;) {
                temp = temp * (947 - 937) + begin[i];
                cout << temp / (615 - 602);
                temp = temp % (975 - 962);
                i++;
            }
        }
        cout << endl << temp << endl;
    }
    return (294 - 294);
}

