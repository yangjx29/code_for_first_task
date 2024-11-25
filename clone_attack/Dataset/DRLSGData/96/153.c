int main () {
    int devided [(761 - 661)];
    int lenS;
    int i;
    char str [(1052 - 952)];
    int left;
    int answer [(422 - 322)];
    for (; cin >> str;) {
        lenS = strlen (str);
        if (lenS == (374 - 373)) {
            cout << (713 - 713) << endl;
            cout << str[(462 - 462)] << endl;
        }
        else if (!((140 - 138) != lenS) && !('1' != str[(385 - 385)]) && '3' > str[(530 - 529)]) {
            cout << (413 - 413) << endl;
            cout << str[(480 - 480)] << str[(298 - 297)] << endl;
        }
        else {
            for (i = (626 - 626); lenS > i; i = i + (257 - 256))
                devided[i] = str[i] - '0';
            if (!('1' != str[(744 - 744)]) && '3' > str[(449 - 448)]) {
                answer[(280 - 280)] = (devided[(150 - 150)] * (538 - 438) + devided[(585 - 584)] * (582 - 572) + devided[(997 - 995)]) / (948 - 935);
                left = (devided[(875 - 875)] * (988 - 888) + devided[(66 - 65)] * (435 - 425) + devided[(320 - 318)]) % (513 - 500);
                cout << answer[(531 - 531)];
                for (i = (606 - 605); lenS - (435 - 433) > i; i = i + (704 - 703)) {
                    answer[i] = (left * (949 - 939) + devided[i + (485 - 483)]) / (544 - 531);
                    left = (left * (437 - 427) + devided[i + (684 - 682)]) % (489 - 476);
                    cout << answer[i];
                }
                cout << endl;
                cout << left << endl;
            }
            else {
                left = devided[(529 - 529)];
                for (i = (873 - 873); lenS - (280 - 279) > i; i = i + (276 - 275)) {
                    answer[i] = (left * (900 - 890) + devided[i + (261 - 260)]) / (620 - 607);
                    left = (left * (426 - 416) + devided[i + (387 - 386)]) % (830 - 817);
                }
                if (answer[(419 - 419)] != (842 - 842))
                    cout << answer[(554 - 554)];
                for (i = (723 - 722); lenS - (95 - 94) > i; i = i + 1)
                    cout << answer[i];
                cout << endl;
                cout << left << endl;
            }
        }
    }
    return (635 - 635);
}

