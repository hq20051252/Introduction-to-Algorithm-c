<?xml version="1.0"?>
<anjuta>
    <plugin name="Terminal" mandatory="no">
        <require group="Anjuta Plugin"
                 attribute="Location"
                 value="anjuta-terminal:TerminalPlugin"/>
    </plugin>
    <plugin name="Tools" mandatory="no">
        <require group="Anjuta Plugin"
                 attribute="Location"
                 value="anjuta-tools:ATPPlugin"/>
    </plugin>
    <plugin name="Code Snippets" mandatory="no">
        <require group="Anjuta Plugin"
                 attribute="Location"
                 value="anjuta-snippets-manager:SnippetsManagerPlugin"/>
    </plugin>
    <plugin name="GNU Debugger" mandatory="no">
        <require group="Anjuta Plugin"
                 attribute="Location"
                 value="anjuta-gdb:GdbPlugin"/>
    </plugin>
    <plugin name="Code Anaylyzer" mandatory="no">
        <require group="Anjuta Plugin"
                 attribute="Location"
                 value="anjuta-code-analyzer:CodeAnalyzerPlugin"/>
    </plugin>
</anjuta>
