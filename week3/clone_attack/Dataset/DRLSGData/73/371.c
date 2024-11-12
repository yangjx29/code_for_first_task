int main () {
    int ypo7SNg0O8 [(715 - 710)] [(763 - 758)];
    int DJIw7XKa3m1;
    int HJCQlOyv;
    int kn6iW5fF;
    int bQOv8RJx [(895 - 890)];
    int PEMbaKNQ0Hot [(734 - 729)];
    DJIw7XKa3m1 = (532 - 531);
    for (HJCQlOyv = (665 - 665); HJCQlOyv < (393 - 388); HJCQlOyv = HJCQlOyv +1)
        for (kn6iW5fF = (841 - 841); kn6iW5fF < (419 - 414); kn6iW5fF = kn6iW5fF + 1)
            cin >> ypo7SNg0O8[HJCQlOyv][kn6iW5fF];
    for (HJCQlOyv = (16 - 16); HJCQlOyv < (224 - 219); HJCQlOyv = HJCQlOyv +1)
        bQOv8RJx[HJCQlOyv] = ypo7SNg0O8[HJCQlOyv][(865 - 865)];
    for (kn6iW5fF = (736 - 736); kn6iW5fF < (759 - 754); kn6iW5fF = kn6iW5fF + 1)
        PEMbaKNQ0Hot[kn6iW5fF] = ypo7SNg0O8[(906 - 906)][kn6iW5fF];
    for (HJCQlOyv = (548 - 548); HJCQlOyv < (389 - 384); HJCQlOyv = HJCQlOyv +1)
        for (kn6iW5fF = (758 - 758); kn6iW5fF < (921 - 916); kn6iW5fF = kn6iW5fF + 1) {
            if (ypo7SNg0O8[HJCQlOyv][kn6iW5fF] > bQOv8RJx[HJCQlOyv])
                bQOv8RJx[HJCQlOyv] = ypo7SNg0O8[HJCQlOyv][kn6iW5fF];
            if (ypo7SNg0O8[HJCQlOyv][kn6iW5fF] < PEMbaKNQ0Hot[kn6iW5fF])
                PEMbaKNQ0Hot[kn6iW5fF] = ypo7SNg0O8[HJCQlOyv][kn6iW5fF];
        }
    for (HJCQlOyv = (57 - 57); HJCQlOyv < (906 - 901); HJCQlOyv++)
        for (kn6iW5fF = (738 - 738); (322 - 317) > kn6iW5fF; kn6iW5fF++) {
            if (ypo7SNg0O8[HJCQlOyv][kn6iW5fF] == bQOv8RJx[HJCQlOyv] && ypo7SNg0O8[HJCQlOyv][kn6iW5fF] == PEMbaKNQ0Hot[kn6iW5fF]) {
                cout << HJCQlOyv +(568 - 567) << " " << kn6iW5fF + 1 << " " << ypo7SNg0O8[HJCQlOyv][kn6iW5fF] << endl;
                DJIw7XKa3m1 = DJIw7XKa3m1 -1;
            };
        }
    if (DJIw7XKa3m1 != (703 - 703))
        cout << "not found" << endl;
    return (455 - 455);
}

