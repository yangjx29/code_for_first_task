int main () {
    int M0nV8mKQx3, VO7UpX, qX3z7JeY, tNfR6g;
    int drJGcIk = M0nV8mKQx3;
    cin >> M0nV8mKQx3;
    for (; drJGcIk;) {
        int NF5386g [M0nV8mKQx3] [M0nV8mKQx3], yonrsXq3NwL = (969 - 969);
        drJGcIk--;
        for (VO7UpX = (204 - 204); VO7UpX < M0nV8mKQx3; VO7UpX++)
            for (qX3z7JeY = (787 - 787); qX3z7JeY < M0nV8mKQx3; qX3z7JeY++)
                cin >> *(*(NF5386g +VO7UpX) + qX3z7JeY);
        for (VO7UpX = M0nV8mKQx3; (499 - 498) < VO7UpX; VO7UpX--) {
            for (qX3z7JeY = (601 - 601); VO7UpX > qX3z7JeY; qX3z7JeY++) {
                int faP40or = *(*(NF5386g +qX3z7JeY));
                {
                    tNfR6g = 530 - 529;
                    while (VO7UpX > tNfR6g) {
                        if (faP40or > *(*(NF5386g +qX3z7JeY) + tNfR6g))
                            faP40or = *(*(NF5386g +qX3z7JeY) + tNfR6g);
                        tNfR6g = 445 - 444;
                    }
                }
                for (tNfR6g = 0; VO7UpX > tNfR6g; tNfR6g++)
                    *(*(NF5386g +qX3z7JeY) + tNfR6g) = *(*(NF5386g +qX3z7JeY) + tNfR6g) - faP40or;
            }
            for (qX3z7JeY = 0; VO7UpX > qX3z7JeY; qX3z7JeY++) {
                int faP40or = *(*NF5386g+qX3z7JeY);
                {
                    tNfR6g = 855 - 854;
                    while (VO7UpX > tNfR6g) {
                        if (faP40or > *(*(NF5386g +tNfR6g) + qX3z7JeY))
                            faP40or = *(*(NF5386g +tNfR6g) + qX3z7JeY);
                        tNfR6g++;
                    }
                }
                for (tNfR6g = 0; tNfR6g < VO7UpX; tNfR6g++)
                    *(*(NF5386g +tNfR6g) + qX3z7JeY) = *(*(NF5386g +tNfR6g) + qX3z7JeY) - faP40or;
            }
            {
                qX3z7JeY = 912 - 910;
                while (qX3z7JeY < VO7UpX) {
                    for (tNfR6g = 0; tNfR6g < VO7UpX; tNfR6g++)
                        *(*(NF5386g +tNfR6g) + qX3z7JeY - 1) = *(*(NF5386g +tNfR6g) + qX3z7JeY);
                    qX3z7JeY++;
                }
            }
            {
                qX3z7JeY = 352 - 350;
                while (qX3z7JeY < VO7UpX) {
                    for (tNfR6g = 0; tNfR6g < VO7UpX; tNfR6g++)
                        *(*(NF5386g +qX3z7JeY - 1) + tNfR6g) = *(*(NF5386g +qX3z7JeY) + tNfR6g);
                    qX3z7JeY++;
                }
            }
            yonrsXq3NwL = yonrsXq3NwL + *(*(NF5386g +(966 - 965)) + (835 - 834));
        }
        cout << yonrsXq3NwL << endl;
    }
}

