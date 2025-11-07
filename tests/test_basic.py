from h2ctypes.dump import load_structs, parse2dict
import os
import json

def test_parse():
    test_root = os.path.dirname(os.path.abspath(__file__))
    test_file = os.path.join(test_root, 'basic.h')
    base_infos = load_structs([test_file,], verbose=False)
    structs, enums, type_defs = base_infos
    print(structs['NestedStruct'])
    return_dict = parse2dict(structs['NestedStruct'], base_infos)
    print(return_dict)
    assert True
