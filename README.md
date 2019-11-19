# myapp1
> syberh示例项目下的应用管理，需要的第二个APP示例项目

### OS4.1项目
```bash
git clone https://github.com/xue99999/myapp1
```
### OS2.1项目(在分支os2_1上)
```bash
git clone -b os2_1 https://github.com/xue99999/myapp1
```

## 如何支持被其他应用调起来
> 参考文件 /platforms/syberos/sopconfig.xml

``` xml
<application syberos:debuggable="true" syberos:name="myapp1" syberos:description="sybeos hybrid app " syberos:icon="res/app.png">
    <uiapp syberos:launcher="true" syberos:id="myapp1" syberos:splash="" syberos:exec="bin/app" syberos:background=""      syberos:name="" syberos:icon="res/app.png">
        // openUrl Start
        <url syberos:id="">
            <scheme>myapp1</scheme>
        </url>
        // openUrl End
        // openDocument Start
        <doctype syberos:id="">
            <action>openPage</action>
            <mime-type>*/*</mime-type>
            <extension>*</extension>
        </doctype>
        // openDocument End
    </uiapp>
</application>
```

