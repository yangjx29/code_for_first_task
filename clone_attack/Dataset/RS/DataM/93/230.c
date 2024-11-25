int main () {
    int fphkxMFTA9;
    fphkxMFTA9 = (744 - 744);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    cin >> fphkxMFTA9;
    if (fphkxMFTA9 % (391 - 388) == (276 - 276) && !(0 != fphkxMFTA9 % 5) && fphkxMFTA9 % 7 == 0)
        cout << "3 " << "5 " << "7" << endl;
    else {
        if (!(0 != fphkxMFTA9 % 3) && !(0 != fphkxMFTA9 % 5))
            cout << "3 " << "5" << endl;
        else {
            if (fphkxMFTA9 % 3 == 0 && fphkxMFTA9 % 7 == 0)
                cout << "3 " << "7" << endl;
            else {
                if (fphkxMFTA9 % 5 == 0 && fphkxMFTA9 % 7 == 0)
                    cout << "5 " << "7" << endl;
                else {
                    if (fphkxMFTA9 % 3 == 0)
                        cout << "3" << endl;
                    else if (fphkxMFTA9 % 5 == 0)
                        cout << "5" << endl;
                    else if (fphkxMFTA9 % 7 == 0)
                        cout << "7" << endl;
                    else
                        cout << "n" << endl;
                };
            };
        };
    }
    return 0;
}

