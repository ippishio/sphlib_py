# **sphlib_py**     ⚠️WIP⚠️
## **About**
### This is an python bind for [coruus/sphlib](https://github.com/coruus/sphlib)

 ### Functions, that already done:
 - _sph_md5_  **--->** ```md5(input,size)```

## Build
Run ```./build.sh``` script, that will out builded python lib in **build/** directory

## Example usage

```import sphlib_py
input_string = "Hello bebra!"
output = sphlib_py.md5(input_string.encoder("utf-8"), 12)
print(output)
```


### **Output**
> ```> b'\xb5\x1ds7M\xf1\xeb\x91\x10\xea\x9f\x97\xa6\xd2\x1f\xc7p\xc8mw\xfc\x7f```

