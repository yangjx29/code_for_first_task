void  change (int ywEckOCb);

int main () {
    int DytZ1QNg;
    change (DytZ1QNg);
    cin >> DytZ1QNg;
    cin.get ();
    return 0;
}

void  change (int ywEckOCb) {
    int num;
    ywEckOCb = ywEckOCb - 1;
    if (ywEckOCb >= 1)
        change (ywEckOCb);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    cin >> num;
    if (ywEckOCb == 0)
        cout << num;
    else
        cout << " " << num;
}

