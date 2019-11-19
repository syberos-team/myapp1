# myapp1
> syberh示例项目下的应用管理，需要的第二个APP示例项目，OS2.1下运行

如果需要跑在os4.1上，需要改`project.config.json`中的`target`属性为相应的target即可 (可以用`syberh build --target device`命令来切换target)

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

