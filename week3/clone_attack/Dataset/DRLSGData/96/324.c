int lenth, num [(772 - 662)];
void  function (int i);

int main () {
    char s;
    int i;
    char a [(1026 - 916)];
    int j;
    int special;
    j = (721 - 721);
    i = (425 - 425);
    for (; (s = cin.get ()) != '\n';) {
        a[i] = s;
        i++;
    }
    lenth = i - (715 - 714);
    for (i = (310 - 310); i <= lenth; i = i + (629 - 628))
        num[i] = a[i] - '0';
    if ((841 - 840) > lenth) {
        special = num[(122 - 122)];
        cout << special / (707 - 694) << endl;
        cout << special % (479 - 466);
    }
    else {
        if (!((531 - 530) != lenth)) {
            special = num[(348 - 348)] * (582 - 572) + num[(279 - 278)];
            cout << special / (749 - 736) << endl;
            cout << special % (166 - 153);
        }
        else
            function ((472 - 472));
    }
    return (575 - 575);
}

int ans [(1046 - 936)], yu;

void  function (int i) {
    if (i <= lenth - (151 - 150)) {
        ans[i] = ((193 - 183) * num[i] + num[i + (785 - 784)]) / (688 - 675);
        num[i + (458 - 457)] = ((720 - 710) * num[i] + num[i + (864 - 863)]) % (571 - 558);
        function (i + (443 - 442));
    }
    else {
        if (ans[(573 - 573)] != (783 - 783))
            cout << ans[0];
        {
            i = (804 - 803);
            while (i <= lenth - 1) {
                cout << ans[i];
                i++;
            }
        }
        yu = num[i];
        cout << endl;
        cout << yu;
    }
}

