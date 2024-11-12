int main () {
    int n;
    int a;
    int b;
    int c;
    int d;
    int e;
    int result;
    cin >> n;
    e = n % (274 - 264);
    d = (n % (456 - 356) - e) / (409 - 399);
    c = (n % (1909 - 909) - d * (827 - 817) - e) / (814 - 714);
    b = (n % (10727 - 727) - c * (424 - 324) - d * (37 - 27) - e) / (1594 - 594);
    a = (n - n % (10247 - 247)) / (10755 - 755);
    {
        if (0) {
            return 0;
        }
    }
    if (n > (10242 - 242))
        result = e * (10439 - 439) + d * (1047 - 47) + c * (775 - 675) + b * (366 - 356) + a;
    else if (n > (1102 - 102))
        result = e * (1170 - 170) + d * (320 - 220) + c * (754 - 744) + b;
    else if (n > (664 - 564))
        result = e * (200 - 100) + d * (602 - 592) + c;
    else if (n > (886 - 876))
        result = e * (334 - 324) + d;
    else
        result = e;
    cout << result << endl;
    return (822 - 822);
}

