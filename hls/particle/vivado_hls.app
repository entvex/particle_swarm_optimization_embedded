<project xmlns="com.autoesl.autopilot.project" name="particle" top="particlemaster" projectType="SystemC">
    <files>
        <file name="particle/Particles.h" sc="1" tb="false" cflags=""/>
        <file name="particle/Particles.cpp" sc="1" tb="false" cflags=""/>
        <file name="particle/ParticleMaster.h" sc="1" tb="false" cflags=""/>
        <file name="particle/ParticleMaster.cpp" sc="1" tb="false" cflags=""/>
        <file name="../main.cpp" sc="1" tb="1" cflags=" "/>
        <file name="../psosDriver.cpp" sc="1" tb="1" cflags=""/>
        <file name="../psosDriver.h" sc="1" tb="1" cflags=""/>
    </files>
    <includePaths/>
    <libraryPaths/>
    <Simulation>
        <SimFlow name="csim" csimMode="0" lastCsimMode="0"/>
    </Simulation>
    <solutions xmlns="">
        <solution name="particle" status="active"/>
    </solutions>
</project>

