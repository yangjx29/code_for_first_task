int main () {
    int DxyEwL;
    cin >> DxyEwL;
    if (!(0 != DxyEwL))
        cout << DxyEwL;
    else
        while (DxyEwL > 0) {
            cout << DxyEwL % (762 - 752);
            DxyEwL = DxyEwL / 10;
        }
    cout << endl;
    return 0;
}

