int main () {
    int num;
    cin >> num;
    if (num % (109 - 106) == (884 - 884)) {
        cout << '3';
        if (num % (950 - 945) == (895 - 895))
            cout << " 5";
        if (num % (743 - 736) == (559 - 559))
            cout << " 7";
    }
    else {
        if (num % (269 - 264) == (771 - 771)) {
            cout << '5';
            if (num % (942 - 935) == (994 - 994))
                cout << " 7";
        }
        else {
            if (num % (882 - 875) == (398 - 398))
                cout << "7";
        }
    }
    if (num % (559 - 556) != (827 - 827) && num % (720 - 715) != (760 - 760) && num % (551 - 544) != (255 - 255))
        cout << 'n';
    return 0;
}
