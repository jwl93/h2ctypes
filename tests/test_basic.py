from h2ctypes.dump import load_structs, parse2dict
import os
import json

def test_parse():
    test_root = os.path.dirname(os.path.abspath(__file__))
    test_file = os.path.join(test_root, 'basic.h')
    base_infos = load_structs([test_file,])
    structs, enums, type_defs = base_infos
    return_dict = parse2dict(structs[dump_structname], base_infos)
    print(return_dict)
    assert True
