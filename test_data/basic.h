// 1. 基础类型结构体
struct BasicStruct {
    int id;
    char name[20];  // 固定大小字符数组
    float score;
    double value;
    bool is_valid;
};

// 2. 包含数组的结构体
struct ArrayStruct {
    int int_array[5];       // 整型数组
    double double_array[3]; // 双精度数组
    char str_array[2][10];  // 二维字符数组（字符串数组）
};

// 3. 嵌套结构体
struct SubStruct {
    short code;
    long long timestamp;
};
struct NestedStruct {
    SubStruct sub;          // 嵌套子结构体
    float data[2];
};

// 4. 包含指针的结构体（ctypes 需用 POINTER 对应）
struct PointerStruct {
    int* int_ptr;           // 整型指针
    char* str_ptr;          // 字符串指针（C风格字符串）
    double* double_array_ptr; // 数组指针
};

// 5. 带枚举的结构体
enum Status { 
	OK, 
	ERROR, 
	PENDING 
};
struct EnumStruct {
    Status status;
    int code;
};

// 6. 对齐与填充测试结构体（测试内存布局）
struct PackedStruct {
    char a;    // 1字节
    int b;     // 4字节（可能有3字节填充）
    short c;   // 2字节（可能有2字节填充）
} __attribute__((packed));  // 取消填充（GCC扩展）

// 注意：C++标准库容器（如std::list、std::string）无法直接用ctypes转换，
// 需用C风格替代（如char[]、指针+长度）
