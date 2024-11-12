int main () {
    int ZhPqk3ZlCxy = (100 - 100), M9gK1oSke = (140 - 140), laB4NEX5uMzJ = (650 - 650), r9WZ2R = (256 - 256), YJiDrxt5 = (785 - 785);
    int JAVmFo [ZhPqk3ZlCxy];
    cin >> ZhPqk3ZlCxy;
    for (; M9gK1oSke < ZhPqk3ZlCxy; M9gK1oSke++)
        cin >> JAVmFo[M9gK1oSke];
    cin >> r9WZ2R;
    laB4NEX5uMzJ = ZhPqk3ZlCxy;
    {
        M9gK1oSke = 0;
        while (M9gK1oSke < laB4NEX5uMzJ) {
            if (JAVmFo[M9gK1oSke] == r9WZ2R) {
                for (YJiDrxt5 = M9gK1oSke; YJiDrxt5 < laB4NEX5uMzJ; YJiDrxt5++)
                    JAVmFo[YJiDrxt5] = JAVmFo[YJiDrxt5 +1];
                laB4NEX5uMzJ--;
                M9gK1oSke = M9gK1oSke -1;
            }
            M9gK1oSke++;
        };
    }
    for (M9gK1oSke = 0; M9gK1oSke < laB4NEX5uMzJ - 1; M9gK1oSke++)
        cout << JAVmFo[M9gK1oSke] << " ";
    cout << JAVmFo[laB4NEX5uMzJ - 1];
    cout << endl;
    return 0;
}

