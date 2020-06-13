#ifndef UNION_H
#define UNION_H

class Union
{
private:
    int _cnt;
    int *_parent;
    int *_size;
    int _find(int u);

public:
    Union() = default;
    Union(int n);

    void connect(int u1, int u2);
    bool is_connected(int u1, int u2);
    int get_count();

    virtual ~Union() = default;
};

#endif /* UNION_H */
